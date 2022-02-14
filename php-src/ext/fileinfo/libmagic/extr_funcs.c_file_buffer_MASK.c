
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_stat_t ;
struct magic_set {int flags; int mode; } ;
struct TYPE_2__ {int st_mode; } ;
struct buffer {TYPE_1__ st; } ;
typedef int php_stream ;
typedef int php_socket_t ;
typedef int file_pushbuf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*,int,int *,void const*,size_t) ;
 scalar_t__ FUNC_2 (struct magic_set*,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct magic_set*,struct buffer*,int) ;
 int FUNC_5 (struct magic_set*,size_t) ;
 int FUNC_6 (struct magic_set*,struct buffer*,int *,int ,char const**,char const**,char const**) ;
 int FUNC_7 (struct magic_set*,struct buffer*) ;
 int FUNC_8 (struct magic_set*,struct buffer*) ;
 int FUNC_9 (struct magic_set*,char const*,struct buffer*) ;
 char* FUNC_10 (struct magic_set*,int *) ;
 int FUNC_11 (struct magic_set*,char*,...) ;
 int * FUNC_12 (struct magic_set*) ;
 int FUNC_13 (struct magic_set*,struct buffer*,int *,int *,int ,int) ;
 int FUNC_14 (struct magic_set*,struct buffer*) ;
 int FUNC_15 (struct magic_set*,struct buffer*) ;
 int FUNC_16 (struct magic_set*,struct buffer*,char const*) ;
 int FUNC_17 (int ,char*,int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int *,int ,void**,int ) ;
 int VAR_15 ;

int
FUNC_20(struct magic_set *VAR_16, php_stream *VAR_17, zend_stat_t *VAR_18,
    const char *VAR_19,
    const void *VAR_20, size_t VAR_21)
{
 int VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
 const char *VAR_25 = ((void*)0);
 const char *VAR_26 = "binary";
 const char *VAR_27 = "data";
 const char *VAR_28 = ((void*)0);
 char *VAR_29 = ((void*)0);
 struct buffer VAR_30;
 int VAR_31 = -1;

 if (VAR_17) {



  int VAR_32;

  int VAR_33 = FUNC_19(VAR_17, VAR_13, (void **)&VAR_32, 0);
  if (VAR_14 == VAR_33) {
   VAR_31 = (int)VAR_32;
  }
 }

 FUNC_1(&VAR_30, VAR_31, VAR_18, VAR_20, VAR_21);
 VAR_16->mode = VAR_30.st.st_mode;

 if (VAR_21 == 0) {
  VAR_27 = "empty";
  goto simple;
 } else if (VAR_21 == 1) {
  VAR_27 = "very short file (no magic)";
  goto simple;
 }

 if ((VAR_16->flags & VAR_8) == 0) {
  VAR_24 = FUNC_6(VAR_16, &VAR_30, ((void*)0), 0,
      &VAR_25, &VAR_26, &VAR_28);
 }
 if ((VAR_16->flags & VAR_11) == 0) {
  VAR_22 = FUNC_8(VAR_16, &VAR_30);
  if ((VAR_16->flags & VAR_1) != 0)
   (void)FUNC_17(VAR_15, "[try tar %d]\n", VAR_22);
  if (VAR_22) {
   if (FUNC_2(VAR_16, &VAR_23))
    goto done;
  }
 }


 if ((VAR_16->flags & VAR_9) == 0) {
  VAR_22 = FUNC_7(VAR_16, &VAR_30);
  if ((VAR_16->flags & VAR_1) != 0)
   (void)FUNC_17(VAR_15, "[try json %d]\n", VAR_22);
  if (VAR_22) {
   if (FUNC_2(VAR_16, &VAR_23))
    goto done;
  }
 }


 if ((VAR_16->flags & VAR_5) == 0) {
  VAR_22 = FUNC_14(VAR_16, &VAR_30);
  if ((VAR_16->flags & VAR_1) != 0)
   (void)FUNC_17(VAR_15, "[try cdf %d]\n", VAR_22);
  if (VAR_22) {
   if (FUNC_2(VAR_16, &VAR_23))
    goto done;
  }
 }
 if ((VAR_16->flags & VAR_10) == 0) {
  VAR_22 = FUNC_13(VAR_16, &VAR_30, ((void*)0), ((void*)0), VAR_0, VAR_24);
  if ((VAR_16->flags & VAR_1) != 0)
   (void)FUNC_17(VAR_15, "[try softmagic %d]\n", VAR_22);
  if (VAR_22 == 1 && VAR_29) {
   if (FUNC_11(VAR_16, "%s", VAR_29) == -1)
    goto done;
  }
  if (VAR_22) {
   if (FUNC_2(VAR_16, &VAR_23))
    goto done;
  }
 }


 if ((VAR_16->flags & VAR_12) == 0) {

  VAR_22 = FUNC_4(VAR_16, &VAR_30, VAR_24);
  if ((VAR_16->flags & VAR_1) != 0)
   (void)FUNC_17(VAR_15, "[try ascmagic %d]\n", VAR_22);
  if (VAR_22) {
   goto done;
  }
 }

simple:

 if (VAR_22 == 0) {
  VAR_22 = 1;
  VAR_23 = FUNC_5(VAR_16, VAR_21);
  if (VAR_23 == 0)
   if (FUNC_11(VAR_16, "%s", VAR_27) == -1)
    VAR_23 = -1;
 }
 done:
 if ((VAR_16->flags & VAR_2) != 0) {
  if (VAR_16->flags & VAR_3)
   if (FUNC_11(VAR_16, "; charset=") == -1)
    VAR_23 = -1;
  if (FUNC_11(VAR_16, "%s", VAR_26) == -1)
   VAR_23 = -1;
 }



 FUNC_3(VAR_29);
 FUNC_0(&VAR_30);
 if (VAR_23)
  return VAR_23;

 return VAR_22;
}
