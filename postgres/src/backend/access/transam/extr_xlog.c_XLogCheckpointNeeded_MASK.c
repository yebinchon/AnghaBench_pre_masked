
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64 ;
typedef scalar_t__ XLogSegNo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_1(XLogSegNo VAR_3)
{
 XLogSegNo VAR_4;

 FUNC_0(VAR_1, VAR_4, VAR_2);

 if (VAR_3 >= VAR_4 + (uint64) (VAR_0 - 1))
  return 1;
 return 0;
}
