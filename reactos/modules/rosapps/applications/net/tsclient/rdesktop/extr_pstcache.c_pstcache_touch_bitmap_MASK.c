
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int stamp ;
struct TYPE_3__ {int* pstcache_fd; int pstcache_Bpp; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int CELLHEADER ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int *,int) ;

void
FUNC_3(RDPCLIENT * VAR_2, uint8 VAR_3, uint16 VAR_4, uint32 VAR_5)
{
 int VAR_6;

 if (!FUNC_0(VAR_3) || VAR_4 >= VAR_0)
  return;

 VAR_6 = VAR_2->pstcache_fd[VAR_3];
 FUNC_1(VAR_6, 12 + VAR_4 * (VAR_2->pstcache_Bpp * VAR_1 + sizeof(CELLHEADER)));
 FUNC_2(VAR_6, &VAR_5, sizeof(VAR_5));
}
