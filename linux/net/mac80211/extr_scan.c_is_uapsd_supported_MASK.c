
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802_11_elems {int* wmm_info; int wmm_info_len; int* wmm_param; int wmm_param_len; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ieee802_11_elems *VAR_1)
{
 u8 VAR_2;

 if (VAR_1->wmm_info && VAR_1->wmm_info_len == 7
     && VAR_1->wmm_info[5] == 1)
  VAR_2 = VAR_1->wmm_info[6];
 else if (VAR_1->wmm_param && VAR_1->wmm_param_len == 24
   && VAR_1->wmm_param[5] == 1)
  VAR_2 = VAR_1->wmm_param[6];
 else

  return 0;

 return VAR_2 & VAR_0;
}
