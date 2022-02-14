
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cdio_stream_io_functions ;
struct TYPE_4__ {int op; void* user_data; } ;
typedef TYPE_1__ CdioDataSource_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,int) ;

CdioDataSource_t *
FUNC_3(void *VAR_0, const cdio_stream_io_functions *VAR_1)
{
  CdioDataSource_t *VAR_2;

  VAR_2 = FUNC_0 (1, sizeof (CdioDataSource_t));
  FUNC_1 (VAR_2 != ((void*)0));

  VAR_2->user_data = VAR_0;
  FUNC_2(&(VAR_2->op), VAR_1, sizeof(cdio_stream_io_functions));

  return VAR_2;
}
