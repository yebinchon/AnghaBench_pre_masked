
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ pos; scalar_t__ wp; scalar_t__ rp; int seek; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;
struct TYPE_9__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_2__ fz_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

fz_stream *
FUNC_2(fz_context *VAR_3, fz_buffer *VAR_4)
{
 fz_stream *VAR_5;

 FUNC_0(VAR_3, VAR_4);
 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_1, VAR_0);
 VAR_5->seek = VAR_2;

 VAR_5->rp = VAR_4->data;
 VAR_5->wp = VAR_4->data + VAR_4->len;

 VAR_5->pos = (int64_t)VAR_4->len;

 return VAR_5;
}
