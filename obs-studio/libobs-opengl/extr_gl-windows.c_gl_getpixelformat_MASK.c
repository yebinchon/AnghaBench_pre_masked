
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_init_data {int dummy; } ;
typedef int PIXELFORMATDESCRIPTOR ;
typedef int HDC ;


 int FUNC_0 (int ,int,int,int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,struct gs_init_data const*) ;

__attribute__((used)) static inline bool FUNC_4(HDC VAR_1, const struct gs_init_data *VAR_2,
         int *VAR_3, PIXELFORMATDESCRIPTOR *VAR_4)
{
 if (!VAR_3)
  return 0;

 *VAR_3 = FUNC_3(VAR_1, VAR_2);

 if (!FUNC_0(VAR_1, *VAR_3, sizeof(*VAR_4), VAR_4)) {
  FUNC_2(VAR_0, "DescribePixelFormat failed, %lu",
       FUNC_1());
  return 0;
 }

 return 1;
}
