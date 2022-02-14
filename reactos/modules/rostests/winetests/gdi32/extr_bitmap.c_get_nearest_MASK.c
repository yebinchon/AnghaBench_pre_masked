
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int COLORREF ;



__attribute__((used)) static COLORREF FUNC_0( int VAR_0, int VAR_1, int VAR_2 )
{
    return (VAR_0*VAR_0 + VAR_1*VAR_1 + VAR_2*VAR_2 < (255-VAR_0)*(255-VAR_0) + (255-VAR_1)*(255-VAR_1) + (255-VAR_2)*(255-VAR_2)) ? 0x000000 : 0xffffff;
}
