
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {unsigned char* rp; unsigned char* wp; scalar_t__ pos; int seek; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

fz_stream *
FUNC_1(fz_context *VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
 fz_stream *VAR_5;

 VAR_5 = FUNC_0(VAR_2, ((void*)0), VAR_0, ((void*)0));
 VAR_5->seek = VAR_1;

 VAR_5->rp = (unsigned char *)VAR_3;
 VAR_5->wp = (unsigned char *)VAR_3 + VAR_4;

 VAR_5->pos = (int64_t)VAR_4;

 return VAR_5;
}
