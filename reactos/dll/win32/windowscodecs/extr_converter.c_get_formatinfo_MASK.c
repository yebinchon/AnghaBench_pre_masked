
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pixelformatinfo {scalar_t__ guid; } ;
typedef int WICPixelFormatGUID ;
typedef size_t UINT ;


 scalar_t__ FUNC_0 (scalar_t__,int const*) ;
 struct pixelformatinfo const* VAR_0 ;

__attribute__((used)) static const struct pixelformatinfo *FUNC_1(const WICPixelFormatGUID *VAR_1)
{
    UINT VAR_2;

    for (VAR_2=0; VAR_0[VAR_2].guid; VAR_2++)
        if (FUNC_0(VAR_0[VAR_2].guid, VAR_1)) return &VAR_0[VAR_2];

    return ((void*)0);
}
