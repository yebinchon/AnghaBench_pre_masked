
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_uchar ;
struct TYPE_10__ {int * stats; int * vio; TYPE_3__* protocol_frame_codec; int * error_info; } ;
struct TYPE_9__ {TYPE_2__* data; } ;
struct TYPE_7__ {size_t (* send ) (TYPE_3__*,int *,int *,int,int *,int *) ;} ;
struct TYPE_8__ {TYPE_1__ m; } ;
typedef int MYSQLND_VIO ;
typedef int MYSQLND_STATS ;
typedef TYPE_3__ MYSQLND_PFC ;
typedef int MYSQLND_ERROR_INFO ;
typedef TYPE_4__ MYSQLND_CONN_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 (int *,char) ;
 size_t FUNC_3 (TYPE_3__*,int *,int *,int,int *,int *) ;

__attribute__((used)) static
size_t FUNC_4(MYSQLND_CONN_DATA * VAR_1, void * VAR_2)
{
 MYSQLND_ERROR_INFO * VAR_3 = VAR_1->error_info;
 MYSQLND_PFC * VAR_4 = VAR_1->protocol_frame_codec;
 MYSQLND_VIO * VAR_5 = VAR_1->vio;
 MYSQLND_STATS * VAR_6 = VAR_1->stats;
 zend_uchar VAR_7[VAR_0 + 1];
 size_t VAR_8;

 FUNC_0("php_mysqlnd_sha256_pk_request_write");

 FUNC_2(VAR_7 + VAR_0, '\1');
 VAR_8 = VAR_4->data->m.send(VAR_4, VAR_5, VAR_7, 1, VAR_6, VAR_3);

 FUNC_1(VAR_8);
}
