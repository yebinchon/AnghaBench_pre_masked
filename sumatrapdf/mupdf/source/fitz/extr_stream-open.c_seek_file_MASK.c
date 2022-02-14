
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {int wp; int rp; int pos; TYPE_2__* state; } ;
typedef TYPE_1__ fz_stream ;
struct TYPE_5__ {int buffer; int file; } ;
typedef TYPE_2__ fz_file_stream ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(fz_context *VAR_2, fz_stream *VAR_3, int64_t VAR_4, int VAR_5)
{
 fz_file_stream *VAR_6 = VAR_3->state;



 int64_t VAR_7 = FUNC_2(VAR_6->file, VAR_4, VAR_5);

 if (VAR_7 < 0)
  FUNC_4(VAR_2, VAR_0, "cannot seek: %s", FUNC_5(VAR_1));



 VAR_3->pos = FUNC_3(VAR_6->file);

 VAR_3->rp = VAR_6->buffer;
 VAR_3->wp = VAR_6->buffer;
}
