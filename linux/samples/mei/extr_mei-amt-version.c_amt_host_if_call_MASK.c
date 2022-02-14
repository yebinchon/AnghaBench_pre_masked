
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct amt_host_if_resp_header {int status; int header; } ;
struct TYPE_3__ {int buf_size; } ;
struct amt_host_if {TYPE_1__ mei_cl; int send_timeout; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,unsigned char const*,scalar_t__,int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static uint32_t FUNC_5(struct amt_host_if *VAR_4,
   const unsigned char *VAR_5, ssize_t VAR_6,
   uint8_t **VAR_7, uint32_t VAR_8,
   unsigned int VAR_9)
{
 uint32_t VAR_10;
 ssize_t VAR_11;
 ssize_t VAR_12;
 uint32_t VAR_13;
 struct amt_host_if_resp_header *VAR_14;

 VAR_10 = VAR_4->mei_cl.buf_size;
 *VAR_7 = (uint8_t *)FUNC_1(sizeof(uint8_t) * VAR_10);
 if (*VAR_7 == ((void*)0))
  return VAR_2;
 FUNC_4(*VAR_7, 0, VAR_10);
 VAR_14 = (struct amt_host_if_resp_header *)*VAR_7;

 VAR_12 = FUNC_3(&VAR_4->mei_cl,
    VAR_5, VAR_6, VAR_4->send_timeout);
 if (VAR_12 != VAR_6)
  return VAR_1;

 VAR_11 = FUNC_2(&VAR_4->mei_cl, *VAR_7, VAR_10, 2000);
 if (VAR_11 <= 0)
  return VAR_0;

 VAR_13 = VAR_14->status;
 if (VAR_13 != VAR_3)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_8,
    &VAR_14->header, VAR_11);
 if (VAR_13 != VAR_3)
  return VAR_13;

 if (VAR_9 && VAR_9 != VAR_11)
  return VAR_1;

 return VAR_3;
}
