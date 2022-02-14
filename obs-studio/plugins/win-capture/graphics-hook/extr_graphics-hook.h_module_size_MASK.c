
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int info ;
struct TYPE_3__ {int SizeOfImage; } ;
typedef TYPE_1__ MODULEINFO ;
typedef int HMODULE ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static inline uint32_t FUNC_2(HMODULE VAR_0)
{
 MODULEINFO VAR_1;
 bool VAR_2 = !!FUNC_1(FUNC_0(), VAR_0,
           &VAR_1, sizeof(VAR_1));
 return VAR_2 ? VAR_1.SizeOfImage : 0;
}
