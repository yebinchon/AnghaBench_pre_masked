
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct v4l2_capability {int capabilities; int device_caps; char* card; char* bus_info; } ;
struct dstr {char const* array; } ;
struct dirent {scalar_t__ d_type; int d_name; } ;
typedef int obs_property_t ;
typedef int obs_data_t ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dstr*,int ) ;
 int FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*,char*) ;
 int FUNC_5 (struct dstr*,int) ;
 char* FUNC_6 (int *,char*) ;
 size_t FUNC_7 (int *,char const*,char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t,int) ;
 int * FUNC_10 (char*) ;
 struct dirent* FUNC_11 (int *) ;
 int FUNC_12 (char*,char*,char*,char*) ;
 int FUNC_13 (char const*,char const*) ;
 scalar_t__ FUNC_14 (char const*) ;
 int * FUNC_15 (int ,char*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int,int ,struct v4l2_capability*) ;
 int FUNC_18 (char const*,int) ;

__attribute__((used)) static void FUNC_19(obs_property_t *VAR_7, obs_data_t *VAR_8)
{
 DIR *VAR_9;
 struct dirent *VAR_10;
 struct dstr VAR_11;
 bool VAR_12;
 size_t VAR_13;
 const char *VAR_14;




 VAR_9 = FUNC_10("/sys/class/video4linux");

 if (!VAR_9)
  return;

 VAR_12 = 0;
 VAR_14 = FUNC_6(VAR_8, "device_id");

 FUNC_8(VAR_7);

 FUNC_4(&VAR_11, "/dev/");

 while ((VAR_10 = FUNC_11(VAR_9)) != ((void*)0)) {
  int VAR_15;
  uint32_t VAR_16;
  struct v4l2_capability VAR_17;






  if (VAR_10->d_type == VAR_0)
   continue;

  FUNC_5(&VAR_11, 5);
  FUNC_2(&VAR_11, VAR_10->d_name);

  if ((VAR_15 = FUNC_18(VAR_11.array, VAR_3 | VAR_2)) == -1) {
   FUNC_0(VAR_1, "Unable to open %s", VAR_11.array);
   continue;
  }

  if (FUNC_17(VAR_15, VAR_6, &VAR_17) == -1) {
   FUNC_0(VAR_1, "Failed to query capabilities for %s",
        VAR_11.array);
   FUNC_16(VAR_15);
   continue;
  }


  VAR_16 = VAR_17.capabilities;







  if (!(VAR_16 & VAR_5)) {
   FUNC_0(VAR_1, "%s seems to not support video capture",
        VAR_11.array);
   FUNC_16(VAR_15);
   continue;
  }


  char VAR_18[68];
  FUNC_12(VAR_18, "%s (%s)", VAR_17.card,
   VAR_17.bus_info);
  FUNC_7(VAR_7, VAR_18,
          VAR_11.array);
  FUNC_0(VAR_1, "Found device '%s' at %s", VAR_17.card,
       VAR_11.array);


  if (VAR_14 && !FUNC_13(VAR_14, VAR_11.array))
   VAR_12 = 1;

  FUNC_16(VAR_15);
 }


 if (!VAR_12 && VAR_14 && FUNC_14(VAR_14)) {
  VAR_13 = FUNC_7(
   VAR_7, VAR_14, VAR_14);
  FUNC_9(VAR_7, VAR_13, 1);
 }

 FUNC_1(VAR_9);
 FUNC_3(&VAR_11);
}
