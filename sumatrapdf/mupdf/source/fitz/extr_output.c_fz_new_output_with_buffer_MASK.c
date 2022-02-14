
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tell; int seek; } ;
typedef TYPE_1__ fz_output ;
typedef int fz_context ;
typedef int fz_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *,int ,int ,int ,int *,int ) ;

fz_output *
FUNC_2(fz_context *VAR_4, fz_buffer *VAR_5)
{
 fz_output *VAR_6 = FUNC_1(VAR_4, 0, FUNC_0(VAR_4, VAR_5), VAR_3, ((void*)0), VAR_0);
 VAR_6->seek = VAR_1;
 VAR_6->tell = VAR_2;
 return VAR_6;
}
