
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__* PQExpBuffer ;


 char* FUNC_0 (char const*,char) ;

__attribute__((used)) static int
FUNC_1(PQExpBuffer VAR_0)
{
 int VAR_1 = 0;
 const char *VAR_2 = VAR_0->data;

 while (*VAR_2 != '\0')
 {
  VAR_1++;

  VAR_2 = FUNC_0(VAR_2, '\n');
  if (!VAR_2)
   break;
  VAR_2++;
 }

 return VAR_1;
}
