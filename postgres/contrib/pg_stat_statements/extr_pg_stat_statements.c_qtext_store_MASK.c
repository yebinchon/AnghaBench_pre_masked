
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ extent; int gc_count; int mutex; int n_writers; } ;
typedef TYPE_1__ pgssSharedState ;
typedef scalar_t__ Size ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int,scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int,char const*,int) ;

__attribute__((used)) static bool
FUNC_9(const char *VAR_7, int VAR_8,
   Size *VAR_9, int *VAR_10)
{
 Size VAR_11;
 int VAR_12;





 {
  volatile pgssSharedState *VAR_13 = (volatile pgssSharedState *) VAR_6;

  FUNC_2(&VAR_13->mutex);
  VAR_11 = VAR_13->extent;
  VAR_13->extent += VAR_8 + 1;
  VAR_13->n_writers++;
  if (VAR_10)
   *VAR_10 = VAR_13->gc_count;
  FUNC_3(&VAR_13->mutex);
 }

 *VAR_9 = VAR_11;


 VAR_12 = FUNC_1(VAR_3, VAR_2 | VAR_1 | VAR_4);
 if (VAR_12 < 0)
  goto error;

 if (FUNC_7(VAR_12, VAR_11, VAR_5) != VAR_11)
  goto error;

 if (FUNC_8(VAR_12, VAR_7, VAR_8) != VAR_8)
  goto error;
 if (FUNC_8(VAR_12, "\0", 1) != 1)
  goto error;

 FUNC_0(VAR_12);


 {
  volatile pgssSharedState *VAR_14 = (volatile pgssSharedState *) VAR_6;

  FUNC_2(&VAR_14->mutex);
  VAR_14->n_writers--;
  FUNC_3(&VAR_14->mutex);
 }

 return 1;

error:
 FUNC_4(VAR_0,
   (FUNC_5(),
    FUNC_6("could not write file \"%s\": %m",
     VAR_3)));

 if (VAR_12 >= 0)
  FUNC_0(VAR_12);


 {
  volatile pgssSharedState *VAR_15 = (volatile pgssSharedState *) VAR_6;

  FUNC_2(&VAR_15->mutex);
  VAR_15->n_writers--;
  FUNC_3(&VAR_15->mutex);
 }

 return 0;
}
