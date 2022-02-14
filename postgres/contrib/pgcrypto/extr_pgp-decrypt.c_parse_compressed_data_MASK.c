
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int compress_algo; int unsupported_compr; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_Context ;
typedef int MBuf ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_1 (int **,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int**) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(PGP_Context *VAR_3, MBuf *VAR_4, PullFilter *VAR_5)
{
 int VAR_6;
 uint8 VAR_7;
 PullFilter *VAR_8;
 uint8 *VAR_9;

 FUNC_0(VAR_5, VAR_7);

 VAR_3->compress_algo = VAR_7;
 switch (VAR_7)
 {
  case 130:
   VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_0, VAR_1);
   break;

  case 129:
  case 128:
   VAR_6 = FUNC_1(&VAR_8, VAR_3, VAR_5);
   if (VAR_6 >= 0)
   {
    VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_8,
             VAR_0, VAR_1);
    FUNC_3(VAR_8);
   }
   break;

  case 131:
   FUNC_5("parse_compressed_data: bzip2 unsupported");

   VAR_3->unsupported_compr = 1;





   while (1)
   {
    VAR_6 = FUNC_4(VAR_5, 32 * 1024, &VAR_9);
    if (VAR_6 <= 0)
     break;
   }

   break;

  default:
   FUNC_5("parse_compressed_data: unknown compr type");
   VAR_6 = VAR_2;
 }

 return VAR_6;
}
