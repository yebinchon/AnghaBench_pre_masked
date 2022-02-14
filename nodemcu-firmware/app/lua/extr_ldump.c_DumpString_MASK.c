
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ strsize_t ;
struct TYPE_5__ {scalar_t__ len; } ;
struct TYPE_6__ {TYPE_1__ tsv; } ;
typedef TYPE_2__ TString ;
typedef int DumpState ;


 int FUNC_0 (int *,scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int * FUNC_2 (TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_3(const TString* VAR_0, DumpState* VAR_1)
{
 if (VAR_0==((void*)0) || FUNC_2(VAR_0)==((void*)0))
 {
  strsize_t VAR_2=0;
  FUNC_1(VAR_2,VAR_1);
 }
 else
 {
  strsize_t VAR_3=( strsize_t )VAR_0->tsv.len+1;
  FUNC_1(VAR_3,VAR_1);
  FUNC_0(FUNC_2(VAR_0),VAR_3,VAR_1);
 }
}
