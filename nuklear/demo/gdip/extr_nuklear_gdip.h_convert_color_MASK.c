
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_color {int a; int r; int g; int b; } ;
typedef int ARGB ;



__attribute__((used)) static ARGB FUNC_0(struct nk_color VAR_0)
{
    return (VAR_0.a << 24) | (VAR_0.r << 16) | (VAR_0.g << 8) | VAR_0.b;
}
