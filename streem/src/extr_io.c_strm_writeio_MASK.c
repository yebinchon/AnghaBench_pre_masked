
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct write_data {TYPE_1__* io; void* f; } ;
typedef int strm_stream ;
typedef TYPE_1__* strm_io ;
typedef int WSANETWORKEVENTS ;
struct TYPE_3__ {int * write_stream; scalar_t__ fd; } ;
typedef int SOCKET ;


 scalar_t__ FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 void* FUNC_2 (scalar_t__,char*) ;
 struct write_data* FUNC_3 (int) ;
 int VAR_0 ;
 int * FUNC_4 (int ,int ,int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static strm_stream*
FUNC_5(strm_io VAR_3)
{
  struct write_data *VAR_4;

  if (!VAR_3->write_stream) {
    VAR_4 = FUNC_3(sizeof(struct write_data));
    VAR_4->f = FUNC_2(VAR_3->fd, "w");

    VAR_4->io = VAR_3;
    VAR_3->write_stream = FUNC_4(VAR_0, VAR_1, VAR_2, (void*)VAR_4);
  }
  return VAR_3->write_stream;
}
