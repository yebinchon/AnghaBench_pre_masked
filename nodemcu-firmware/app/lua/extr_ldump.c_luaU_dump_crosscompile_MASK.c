
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_Writer ;
typedef int lua_State ;
struct TYPE_4__ {int strip; int status; scalar_t__ wrote; int target; void* data; int writer; int * L; } ;
typedef int Proto ;
typedef int DumpTargetInfo ;
typedef TYPE_1__ DumpState ;


 int FUNC_0 (int const*,int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2 (lua_State* VAR_0, const Proto* VAR_1, lua_Writer VAR_2, void* VAR_3, int VAR_4, DumpTargetInfo VAR_5)
{
 DumpState VAR_6;
 VAR_6.L=VAR_0;
 VAR_6.writer=VAR_2;
 VAR_6.data=VAR_3;
 VAR_6.strip=VAR_4;
 VAR_6.status=0;
 VAR_6.target=VAR_5;
 VAR_6.wrote=0;
 FUNC_1(&VAR_6);
 FUNC_0(VAR_1,((void*)0),&VAR_6);
 return VAR_6.status;
}
