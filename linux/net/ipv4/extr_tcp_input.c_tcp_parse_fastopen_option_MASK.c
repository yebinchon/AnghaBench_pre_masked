
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_fastopen_cookie {int len; int exp; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_1(int VAR_2, const unsigned char *VAR_3,
          bool VAR_4, struct tcp_fastopen_cookie *VAR_5,
          bool VAR_6)
{

 if (!VAR_5 || !VAR_4 || VAR_2 < 0 || (VAR_2 & 1))
  return;

 if (VAR_2 >= VAR_1 &&
     VAR_2 <= VAR_0)
  FUNC_0(VAR_5->val, VAR_3, VAR_2);
 else if (VAR_2 != 0)
  VAR_2 = -1;
 VAR_5->len = VAR_2;
 VAR_5->exp = VAR_6;
}
