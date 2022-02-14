
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {int db; } ;
typedef TYPE_1__ LsmDb ;


 int FUNC_0 (int ,void*,int,void*,int) ;

__attribute__((used)) static int FUNC_1(
  TestDb *VAR_0,
  void *VAR_1, int VAR_2,
  void *VAR_3, int VAR_4
){
  LsmDb *VAR_5 = (LsmDb *)VAR_0;
  return FUNC_0(VAR_5->db, VAR_1, VAR_2, VAR_3, VAR_4);
}
