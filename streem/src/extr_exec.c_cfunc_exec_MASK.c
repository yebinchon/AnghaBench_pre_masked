
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int strm_value ;
struct TYPE_6__ {scalar_t__ (* data ) (TYPE_1__*,int,int *,int *) ;} ;
typedef TYPE_1__ strm_stream ;
typedef scalar_t__ (* strm_cfunc ) (TYPE_1__*,int,int *,int *) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int *,int *) ;

__attribute__((used)) static int
FUNC_2(strm_stream* VAR_2, strm_value VAR_3)
{
  strm_value VAR_4;
  strm_cfunc VAR_5 = VAR_2->data;

  if ((*VAR_5)(VAR_2, 1, &VAR_3, &VAR_4) == VAR_1) {
    FUNC_0(VAR_2, VAR_4, ((void*)0));
    return VAR_1;
  }
  return VAR_0;
}
