
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int uint ;
struct entry {int mode; int flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;


 int FUNC_0 (char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int **) ;

__attribute__((used)) static void FUNC_6(const struct entry *VAR_3, int VAR_4, uint VAR_5)
{
 wchar_t *VAR_6;
 char VAR_7 = '\0';

 switch (VAR_3->mode & VAR_2) {
 case 129:
  if (VAR_3->mode & 0100)
   VAR_7 = '*';
  break;
 case 132:
  VAR_7 = '/';
  break;
 case 130:
  VAR_7 = '@';
  break;
 case 128:
  VAR_7 = '=';
  break;
 case 131:
  VAR_7 = '|';
  break;
 case 134:
 case 133:
  break;
 default:
  VAR_7 = '?';
  break;
 }

 if (!VAR_7)
  ++VAR_5;

 FUNC_5(VAR_3->name, VAR_5, &VAR_6);


 FUNC_4(VAR_3->flags);

 if (VAR_4)
  FUNC_3(VAR_0);

 FUNC_0((VAR_3->flags & VAR_1) ? '+' : ' ');
 FUNC_1(VAR_6);
 if (VAR_7)
  FUNC_0(VAR_7);
 FUNC_0('\n');

 if (VAR_4)
  FUNC_2(VAR_0);
}
