
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oletls {int ole_inits; } ;
typedef int ole_clipbrd ;
typedef int HRESULT ;


 struct oletls* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static inline HRESULT FUNC_1(ole_clipbrd **VAR_3)
{
    struct oletls *VAR_4 = FUNC_0();
    *VAR_3 = ((void*)0);

    if(!VAR_4->ole_inits)
        return VAR_0;
    *VAR_3 = VAR_2;

    return VAR_1;
}
