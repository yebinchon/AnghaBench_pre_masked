
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ssize_t ;
typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int,char*,int,int ) ;
 int FUNC_3 (char*,char**) ;

__attribute__((used)) static void FUNC_4(int VAR_0, uint64_t *VAR_1, uint64_t *VAR_2)
{
 uint64_t VAR_3, VAR_4;
 char VAR_5[64], *VAR_6;
 ssize_t VAR_7;


 FUNC_1(VAR_5, 0, sizeof(VAR_5));
 VAR_7 = FUNC_2(VAR_0, VAR_5, sizeof(VAR_5), 0);
 FUNC_0(0 <= VAR_7 && VAR_7 <= sizeof(VAR_5));
 VAR_5[sizeof(VAR_5) - 1] = '\0';

 VAR_6 = VAR_5;

 VAR_3 = FUNC_3(VAR_6, &VAR_6);
 FUNC_0(VAR_6[0] == '.');
 FUNC_0('0' <= VAR_6[1] && VAR_6[1] <= '9');
 FUNC_0('0' <= VAR_6[2] && VAR_6[2] <= '9');
 FUNC_0(VAR_6[3] == ' ');

 VAR_4 = (VAR_6[1] - '0') * 10 + VAR_6[2] - '0';
 *VAR_1 = VAR_3 * 100 + VAR_4;

 VAR_6 += 4;

 VAR_3 = FUNC_3(VAR_6, &VAR_6);
 FUNC_0(VAR_6[0] == '.');
 FUNC_0('0' <= VAR_6[1] && VAR_6[1] <= '9');
 FUNC_0('0' <= VAR_6[2] && VAR_6[2] <= '9');
 FUNC_0(VAR_6[3] == '\n');

 VAR_4 = (VAR_6[1] - '0') * 10 + VAR_6[2] - '0';
 *VAR_2 = VAR_3 * 100 + VAR_4;

 FUNC_0(VAR_6 + 4 == VAR_5 + VAR_7);
}
