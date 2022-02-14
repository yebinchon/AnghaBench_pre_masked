
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;
typedef int gdIOCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int) ;

__attribute__((used)) static gdImagePtr FUNC_7 (gdIOCtx * VAR_0, int *VAR_1, int *VAR_2)
{
 gdImagePtr VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;

 if (!FUNC_2(VAR_1, VAR_0)) {
  goto fail1;
 }
 if (*VAR_1 == 65535 || *VAR_1 == 65534) {

  VAR_4 = 1;

  if (*VAR_1 == 65534) {
   VAR_5 = 1;
  }
  if (!FUNC_2(VAR_1, VAR_0)) {
   goto fail1;
  }
 }
 if (!FUNC_2(VAR_2, VAR_0)) {
  goto fail1;
 }

 FUNC_0(FUNC_6("Image is %dx%d\n", *VAR_1, *VAR_2));

 if (VAR_5) {
  VAR_3 = FUNC_4(*VAR_1, *VAR_2);
 } else {
  VAR_3 = FUNC_3(*VAR_1, *VAR_2);
 }
 if(!VAR_3) {
  goto fail1;
 }
 if (!FUNC_1(VAR_0, VAR_3, VAR_4)) {
  goto fail2;
 }

 return VAR_3;
fail2:
 FUNC_5(VAR_3);
fail1:
 return 0;
}
