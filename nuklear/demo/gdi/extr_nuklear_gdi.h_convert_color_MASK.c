
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_color {int r; int g; int b; } ;
typedef int COLORREF ;



__attribute__((used)) static COLORREF
FUNC_0(struct nk_color VAR_0)
{
    return VAR_0.r | (VAR_0.g << 8) | (VAR_0.b << 16);
}
