
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_2__ {int * ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static inline size_t FUNC_1(size_t VAR_3)
{
    return (FUNC_0(VAR_1, VAR_2.ptr[VAR_3]) + sizeof(WCHAR) + VAR_0-1) & ~(VAR_0-1);
}
