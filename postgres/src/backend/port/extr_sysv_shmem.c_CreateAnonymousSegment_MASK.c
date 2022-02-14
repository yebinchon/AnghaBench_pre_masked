
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_6 (int *,int,int,int,int,int ) ;

__attribute__((used)) static void *
FUNC_7(Size *VAR_11)
{
 Size VAR_12 = *VAR_11;
 void *VAR_13 = VAR_5;
 int VAR_14 = 0;



 FUNC_0(VAR_10 != VAR_3);
 if (VAR_13 == VAR_5 && VAR_10 != VAR_3)
 {




  VAR_12 = *VAR_11;
  VAR_13 = FUNC_6(((void*)0), VAR_12, VAR_7 | VAR_8,
       VAR_6, -1, 0);
  VAR_14 = VAR_9;
 }

 if (VAR_13 == VAR_5)
 {
  VAR_9 = VAR_14;
  FUNC_3(VAR_2,
    (FUNC_5("could not map anonymous shared memory: %m"),
     (VAR_14 == VAR_1) ?
     FUNC_4("This error usually means that PostgreSQL's request "
       "for a shared memory segment exceeded available memory, "
       "swap space, or huge pages. To reduce the request size "
       "(currently %zu bytes), reduce PostgreSQL's shared "
       "memory usage, perhaps by reducing shared_buffers or "
       "max_connections.",
       *VAR_11) : 0));
 }

 *VAR_11 = VAR_12;
 return VAR_13;
}
