
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Window ;
struct TYPE_4__ {int utf8_string_atom; int name_atom; } ;
struct TYPE_5__ {TYPE_1__ ewmhints; int display; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,unsigned char*,int) ;
 int FUNC_1 (char const*) ;

void
FUNC_2(RDPCLIENT * VAR_1, Window VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_0(VAR_1->display, VAR_2, VAR_1->ewmhints.name_atom, VAR_1->ewmhints.utf8_string_atom,
   8, VAR_0, (unsigned char *) VAR_3, VAR_4);
}
