
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct write_data {int f; TYPE_1__* io; } ;
struct iovec {int iov_len; void* iov_base; } ;
typedef int strm_value ;
typedef int strm_string ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_2__ strm_stream ;
struct TYPE_4__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__,int,int,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,struct iovec*,int) ;

__attribute__((used)) static int
FUNC_8(strm_stream* VAR_3, strm_value VAR_4)
{
  struct write_data *VAR_5 = (struct write_data*)VAR_3->data;
  strm_string VAR_6 = FUNC_6(VAR_4);


  struct iovec VAR_7[2];

  VAR_7[0].iov_base = (void*)FUNC_5(VAR_6);
  VAR_7[0].iov_len = FUNC_4(VAR_6);
  VAR_7[1].iov_base = (void*)"\n";
  VAR_7[1].iov_len = 1;
  if (FUNC_7(FUNC_1(VAR_5->f), VAR_7, 2) < 0) {
    return VAR_1;
  }







  return VAR_2;
}
