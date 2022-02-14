
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hda_nid_t ;


 int FUNC_0 (char const* const*) ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static const char *FUNC_2(hda_nid_t VAR_0, const hda_nid_t *VAR_1,
        int VAR_2, int *VAR_3)
{
 static const char * const VAR_4[] = {
  " Front", " Surround", " CLFE", " Side"
 };
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_5 < 0)
  return ((void*)0);
 if (VAR_2 == 1)
  return "";
 if (VAR_2 > FUNC_0(VAR_4)) {
  if (VAR_3)
   *VAR_3 = VAR_5;
  return "";
 }
 return VAR_4[VAR_5];
}
