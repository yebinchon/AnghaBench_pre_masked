
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PSTR ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,double,...) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static PSTR FUNC_3(ULONG VAR_0, PSTR VAR_1)
{
 static const char *VAR_2[3] = {
  " KB", " MB", " GB"
 };
 int VAR_3;
 double VAR_4;

 if (VAR_0 < 1000) {

  FUNC_1(VAR_1, "%u", VAR_0);



  return VAR_1;
 }

 VAR_4 = VAR_0;
 VAR_4 /= 1024;
 VAR_3 = 0;

 while (VAR_3 < 2 && VAR_4 >= 1000) {
  VAR_4 /= 1000;
  VAR_3++;
 }

 if (VAR_4 < 10) {
  FUNC_1(VAR_1, "%3.2f%s", VAR_4, VAR_2[VAR_3]);
 }
 else if (VAR_4 < 100) {
  FUNC_1(VAR_1, "%3.1f%s", VAR_4, VAR_2[VAR_3]);
 }
 else if (VAR_4 < 1000) {
  FUNC_1(VAR_1, "%3.0f%s", VAR_4, VAR_2[VAR_3]);
 }
 else {
  FUNC_0((ULONG)VAR_4, VAR_1);
  FUNC_2(VAR_1, VAR_2[VAR_3]);
 }

 return VAR_1;
}
