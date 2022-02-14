
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_6__ {size_t avail_in; size_t avail_out; int total_out; int * next_out; int * next_in; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int ,int,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int *,int ,char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static zend_string *FUNC_12(const char *VAR_9, size_t VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;
 z_stream VAR_14;
 zend_string *VAR_15;

 FUNC_6(&VAR_14, 0, sizeof(z_stream));
 VAR_14.zalloc = VAR_7;
 VAR_14.zfree = VAR_8;

 if (VAR_5 == (VAR_13 = FUNC_5(&VAR_14, VAR_12, VAR_3, VAR_11, VAR_1, VAR_2))) {
  VAR_15 = FUNC_9(FUNC_0(VAR_10), 0);

  VAR_14.next_in = (Bytef *) VAR_9;
  VAR_14.next_out = (Bytef *) FUNC_2(VAR_15);
  VAR_14.avail_in = VAR_10;
  VAR_14.avail_out = FUNC_1(VAR_15);

  VAR_13 = FUNC_3(&VAR_14, VAR_4);
  FUNC_4(&VAR_14);

  if (VAR_6 == VAR_13) {

   VAR_15 = FUNC_11(VAR_15, VAR_14.total_out, 0);
   FUNC_2(VAR_15)[FUNC_1(VAR_15)] = '\0';
   return VAR_15;
  } else {
   FUNC_10(VAR_15);
  }
 }

 FUNC_7(((void*)0), VAR_0, "%s", FUNC_8(VAR_13));
 return ((void*)0);
}
