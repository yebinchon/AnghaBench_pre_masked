
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int flags; scalar_t__ index; int pixelformat; scalar_t__ description; int type; } ;
struct dstr {int array; } ;
typedef int obs_property_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dstr*,char*) ;
 int FUNC_2 (struct dstr*,char*) ;
 int FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,int ,struct v4l2_fmtdesc*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(int VAR_5, obs_property_t *VAR_6)
{
 struct v4l2_fmtdesc VAR_7;
 VAR_7.type = VAR_1;
 VAR_7.index = 0;
 struct dstr VAR_8;
 FUNC_4(&VAR_8);

 FUNC_6(VAR_6);

 while (FUNC_7(VAR_5, VAR_4, &VAR_7) == 0) {
  FUNC_2(&VAR_8, (char *)VAR_7.description);
  if (VAR_7.flags & VAR_2)
   FUNC_1(&VAR_8, " (Emulated)");

  if (FUNC_8(VAR_7.pixelformat) !=
      VAR_3) {
   FUNC_5(VAR_6, VAR_8.array,
        VAR_7.pixelformat);
   FUNC_0(VAR_0, "Pixelformat: %s (available)",
        VAR_8.array);
  } else {
   FUNC_0(VAR_0, "Pixelformat: %s (unavailable)",
        VAR_8.array);
  }
  VAR_7.index++;
 }

 FUNC_3(&VAR_8);
}
