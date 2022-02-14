
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
struct stream {int size; int * data; int * p; } ;
typedef int RD_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct stream*) ;
 int FUNC_1 (char*,char*,char*,char*,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct stream*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

RD_BOOL
FUNC_6(char *VAR_3, char *VAR_4, char *VAR_5, char *VAR_6, RD_BOOL VAR_7)
{
 uint32 VAR_8;
 struct stream VAR_9;


 if (!FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_8))
  return VAR_0;


 VAR_9.size = 512;
 VAR_9.p = VAR_9.data = (uint8 *) FUNC_5(VAR_9.size);
 FUNC_3(&VAR_9, VAR_8);


 if (!FUNC_0(&VAR_9))
  return VAR_0;


 if (VAR_2)
  FUNC_2();
 FUNC_4(VAR_9.data);
 return VAR_1;
}
