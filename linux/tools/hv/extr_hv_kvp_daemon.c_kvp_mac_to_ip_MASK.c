
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_kvp_ipaddr_value {scalar_t__ ip_addr; scalar_t__ adapter_id; } ;
struct dirent {char* d_name; } ;
typedef int dev_id ;
typedef int buf ;
typedef int FILE ;
typedef int DIR ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,int ,struct hv_kvp_ipaddr_value*,int) ;
 int * FUNC_5 (char*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 unsigned int FUNC_10 (char*) ;
 char FUNC_11 (char) ;

__attribute__((used)) static int FUNC_12(struct hv_kvp_ipaddr_value *VAR_5)
{
 char *VAR_6 = (char *)VAR_5->adapter_id;
 DIR *VAR_7;
 struct dirent *VAR_8;
 FILE *VAR_9;
 char *VAR_10, *VAR_11;
 char *VAR_12 = ((void*)0);
 char VAR_13[256];
 char VAR_14[VAR_4];
 unsigned int VAR_15;
 int VAR_16 = VAR_0;

 VAR_7 = FUNC_5(VAR_1);
 if (VAR_7 == ((void*)0))
  return VAR_0;

 while ((VAR_8 = FUNC_6(VAR_7)) != ((void*)0)) {



  FUNC_7(VAR_14, sizeof(VAR_14), "%s%s/address", VAR_1,
    VAR_8->d_name);

  VAR_9 = FUNC_3(VAR_14, "r");
  if (VAR_9 == ((void*)0))
   continue;

  VAR_10 = FUNC_2(VAR_13, sizeof(VAR_13), VAR_9);
  FUNC_1(VAR_9);
  if (!VAR_10)
   continue;

  VAR_11 = FUNC_8(VAR_10, '\n');
  if (VAR_11)
   *VAR_11 = '\0';

  for (VAR_15 = 0; VAR_15 < FUNC_10(VAR_10); VAR_15++)
   VAR_10[VAR_15] = FUNC_11(VAR_10[VAR_15]);

  if (FUNC_9(VAR_10, VAR_6))
   continue;





  VAR_12 = VAR_8->d_name;
  if (!VAR_12)
   continue;

  VAR_16 = FUNC_4(0, VAR_12, VAR_2,
     VAR_5, VAR_3 * 2);

  if (!VAR_16 && FUNC_10((char *)VAR_5->ip_addr))
   break;
 }

 FUNC_0(VAR_7);
 return VAR_16;
}
