
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int member_0; } ;
typedef enum window_priority { ____Placeholder_window_priority } window_priority ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,int ) ;
 int FUNC_4 (struct dstr*,int ) ;
 int FUNC_5 (struct dstr*,int ) ;

__attribute__((used)) static int FUNC_6(HWND VAR_3, enum window_priority VAR_4,
    const char *VAR_5, const char *VAR_6, const char *VAR_7,
    bool VAR_8)
{
 struct dstr VAR_9 = {0};
 struct dstr VAR_10 = {0};
 struct dstr VAR_11 = {0};
 int VAR_12 = 0x7FFFFFFF;

 if (!FUNC_4(&VAR_11, VAR_3))
  return 0x7FFFFFFF;
 FUNC_5(&VAR_10, VAR_3);
 FUNC_3(&VAR_9, VAR_3);

 bool VAR_13 = FUNC_1(&VAR_9, VAR_5) == 0;
 bool VAR_14 = FUNC_1(&VAR_11, VAR_7) == 0;
 int VAR_15 = FUNC_0(FUNC_1(&VAR_10, VAR_6));


 if (VAR_8) {
  if (VAR_4 == VAR_1 && !VAR_14)
   VAR_12 = 0x7FFFFFFF;
  else
   VAR_12 = VAR_15 == 0 ? 0 : 0x7FFFFFFF;

 } else if (VAR_4 == VAR_0) {
  VAR_12 = VAR_13 ? VAR_15 : 0x7FFFFFFF;
  if (VAR_12 != 0x7FFFFFFF && !VAR_14)
   VAR_12 += 0x1000;

 } else if (VAR_4 == VAR_2) {
  VAR_12 = VAR_15 == 0 ? 0 : 0x7FFFFFFF;

 } else if (VAR_4 == VAR_1) {
  VAR_12 = VAR_14 ? VAR_15 : 0x7FFFFFFF;
 }

 FUNC_2(&VAR_9);
 FUNC_2(&VAR_10);
 FUNC_2(&VAR_11);

 return VAR_12;
}
