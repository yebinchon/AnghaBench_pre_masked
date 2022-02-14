
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; int len; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;

void
FUNC_2(PQExpBuffer VAR_0, const char *VAR_1, size_t VAR_2)
{

 if (!FUNC_0(VAR_0, VAR_2))
  return;


 FUNC_1(VAR_0->data + VAR_0->len, VAR_1, VAR_2);
 VAR_0->len += VAR_2;





 VAR_0->data[VAR_0->len] = '\0';
}
