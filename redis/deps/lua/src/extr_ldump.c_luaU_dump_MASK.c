
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_Writer ;
typedef int lua_State ;
struct TYPE_4__ {int strip; int status; void* data; int writer; int * L; } ;
typedef int Proto ;
typedef TYPE_1__ DumpState ;


 int FUNC_0 (int const*,int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2 (lua_State* VAR_0, const Proto* VAR_1, lua_Writer VAR_2, void* VAR_3, int VAR_4)
{
 DumpState VAR_5;
 VAR_5.L=VAR_0;
 VAR_5.writer=VAR_2;
 VAR_5.data=VAR_3;
 VAR_5.strip=VAR_4;
 VAR_5.status=0;
 FUNC_1(&VAR_5);
 FUNC_0(VAR_1,((void*)0),&VAR_5);
 return VAR_5.status;
}
