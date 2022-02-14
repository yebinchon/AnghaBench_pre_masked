
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fis_image_desc {int dummy; } ;


 struct fis_image_desc* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 () ;
 struct fis_image_desc* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct fis_image_desc* FUNC_2 (int *,int ,int,int,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,int) ;

__attribute__((used)) static struct fis_image_desc *
FUNC_5(void)
{
 struct fis_image_desc *VAR_9;

 if (VAR_8 >= 0)
  FUNC_1();

 VAR_8 = FUNC_3("FIS directory");
 if (VAR_8 < 0)
  goto error;

 FUNC_0(VAR_8);
 VAR_8 = FUNC_4("FIS directory", 1);
 if (VAR_8 < 0)
  goto error;

 VAR_7 = VAR_5;
 VAR_9 = FUNC_2(((void*)0), VAR_5, VAR_3|VAR_4, VAR_2|VAR_1, VAR_8, 0);
 if (VAR_9 == VAR_0)
  goto error;

 VAR_6 = VAR_9;
 return VAR_9;

error:
 FUNC_1();
 return ((void*)0);
}
