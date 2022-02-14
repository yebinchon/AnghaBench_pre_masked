
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vtable_ptr ;
typedef int rtti_object_locator ;


 scalar_t__* FUNC_0 (void*) ;

__attribute__((used)) static inline const rtti_object_locator *FUNC_1( void *VAR_0 )
{
    const vtable_ptr *VAR_1 = FUNC_0( VAR_0 );
    return (const rtti_object_locator *)VAR_1[-1];
}
