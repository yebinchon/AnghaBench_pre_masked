
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int zend_uchar ;
typedef scalar_t__ enum_func_status ;
struct TYPE_22__ {int (* free_chunk ) (TYPE_6__*,int *) ;int * (* resize_chunk ) (TYPE_6__*,int *,size_t,size_t) ;int * (* get_chunk ) (TYPE_6__*,size_t) ;} ;
struct TYPE_21__ {size_t size; } ;
struct TYPE_20__ {TYPE_2__* data; } ;
struct TYPE_19__ {int * ptr; } ;
struct TYPE_17__ {scalar_t__ (* receive ) (TYPE_4__*,int *,int *,size_t,int *,int *) ;} ;
struct TYPE_18__ {TYPE_1__ m; } ;
typedef int MYSQLND_VIO ;
typedef int MYSQLND_STATS ;
typedef TYPE_3__ MYSQLND_ROW_BUFFER ;
typedef TYPE_4__ MYSQLND_PFC ;
typedef TYPE_5__ MYSQLND_PACKET_HEADER ;
typedef TYPE_6__ MYSQLND_MEMORY_POOL ;
typedef int MYSQLND_ERROR_INFO ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int *,TYPE_5__*,int *,int *) ;
 int FUNC_6 (int ,char*) ;
 int * FUNC_7 (TYPE_6__*,size_t) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int *,int *,size_t,int *,int *) ;
 int * FUNC_9 (TYPE_6__*,int *,size_t,size_t) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int *,int *,size_t,int *,int *) ;
 int FUNC_11 (TYPE_6__*,int *) ;

__attribute__((used)) static enum_func_status
FUNC_12(MYSQLND_PFC * VAR_4,
      MYSQLND_VIO * VAR_5,
      MYSQLND_STATS * VAR_6,
      MYSQLND_ERROR_INFO * VAR_7,
      MYSQLND_MEMORY_POOL * VAR_8,
      MYSQLND_ROW_BUFFER * VAR_9,
      size_t * const VAR_10)
{
 enum_func_status VAR_11 = VAR_3;
 MYSQLND_PACKET_HEADER VAR_12;
 zend_uchar * VAR_13 = ((void*)0);
 size_t VAR_14;

 FUNC_0("php_mysqlnd_read_row_ex");
 VAR_14 = 1;

 *VAR_10 = 0;
 if (FUNC_4(VAR_1 == FUNC_5(VAR_4, VAR_5, &VAR_12, VAR_6, VAR_7))) {
  VAR_11 = VAR_1;
 } else {
  *VAR_10 += VAR_12.size;
  VAR_9->ptr = VAR_8->get_chunk(VAR_8, *VAR_10 + VAR_14);
  VAR_13 = VAR_9->ptr;

  if (FUNC_4(VAR_3 != (VAR_11 = VAR_4->data->m.receive(VAR_4, VAR_5, VAR_13, VAR_12.size, VAR_6, VAR_7)))) {
   FUNC_1("Empty row packet body");
   FUNC_6(VAR_0, "Empty row packet body");
  } else {
   while (VAR_12.size >= VAR_2) {
    if (VAR_1 == FUNC_5(VAR_4, VAR_5, &VAR_12, VAR_6, VAR_7)) {
     VAR_11 = VAR_1;
     break;
    }

    *VAR_10 += VAR_12.size;


    if (!VAR_12.size) {
     break;
    }




    VAR_9->ptr = VAR_8->resize_chunk(VAR_8, VAR_9->ptr, *VAR_10 - VAR_12.size, *VAR_10 + VAR_14);
    if (!VAR_9->ptr) {
     FUNC_3(VAR_7);
     VAR_11 = VAR_1;
     break;
    }

    VAR_13 = (zend_uchar *) VAR_9->ptr + (*VAR_10 - VAR_12.size);

    if (VAR_3 != (VAR_11 = VAR_4->data->m.receive(VAR_4, VAR_5, VAR_13, VAR_12.size, VAR_6, VAR_7))) {
     FUNC_1("Empty row packet body");
     FUNC_6(VAR_0, "Empty row packet body");
     break;
    }
   }
  }
 }
 if (VAR_11 == VAR_1 && VAR_9->ptr) {
  VAR_8->free_chunk(VAR_8, VAR_9->ptr);
  VAR_9->ptr = ((void*)0);
 }
 FUNC_2(VAR_11);
}
