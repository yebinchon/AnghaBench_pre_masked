
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct concat_filter {int max; int pad; int ws_buf; scalar_t__ current; scalar_t__ count; } ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 struct concat_filter* FUNC_0 (int *,int,int) ;
 int * FUNC_1 (int *,struct concat_filter*,int ,int ) ;
 int VAR_1 ;

fz_stream *
FUNC_2(fz_context *VAR_2, int VAR_3, int VAR_4)
{
 struct concat_filter *VAR_5;

 VAR_5 = FUNC_0(VAR_2, 1, sizeof(struct concat_filter) + (VAR_3-1)*sizeof(fz_stream *));
 VAR_5->max = VAR_3;
 VAR_5->count = 0;
 VAR_5->current = 0;
 VAR_5->pad = VAR_4;
 VAR_5->ws_buf = 32;

 return FUNC_1(VAR_2, VAR_5, VAR_1, VAR_0);
}
