
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_color {scalar_t__ a; scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;
typedef int ALLEGRO_COLOR ;


 int FUNC_0 (unsigned char,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static ALLEGRO_COLOR
FUNC_1(struct nk_color VAR_0)
{
    return FUNC_0((unsigned char)VAR_0.r, (unsigned char)VAR_0.g,
                (unsigned char)VAR_0.b, (unsigned char)VAR_0.a);
}
