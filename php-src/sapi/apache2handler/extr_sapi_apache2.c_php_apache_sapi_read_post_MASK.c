
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int input_filters; } ;
typedef TYPE_1__ request_rec ;
struct TYPE_5__ {int * brigade; TYPE_1__* r; } ;
typedef TYPE_2__ php_struct ;
typedef size_t apr_size_t ;
typedef int apr_bucket_brigade ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,size_t*) ;
 int VAR_3 ;

__attribute__((used)) static apr_size_t
FUNC_4(char *VAR_4, size_t VAR_5)
{
 apr_size_t VAR_6, VAR_7=0;
 php_struct *VAR_8 = FUNC_0(VAR_3);
 request_rec *VAR_9;
 apr_bucket_brigade *VAR_10;

 VAR_9 = VAR_8->r;
 VAR_10 = VAR_8->brigade;
 VAR_6 = VAR_5;







 while (FUNC_1(VAR_9->input_filters, VAR_10, VAR_2, VAR_0, VAR_6) == VAR_1) {
  FUNC_3(VAR_10, VAR_4, &VAR_6);
  FUNC_2(VAR_10);
  VAR_7 += VAR_6;
  if (VAR_7 == VAR_5 || !VAR_6) {
   break;
  }
  VAR_4 += VAR_6;
  VAR_6 = VAR_5 - VAR_7;
 }

 return VAR_7;
}
