
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrg_header {int digest; int devname; int offset; } ;
typedef int MD5_CTX ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(struct wrg_header *VAR_0, char *VAR_1, int VAR_2)
{
 MD5_CTX VAR_3;

 FUNC_1(&VAR_3);

 FUNC_2(&VAR_3, (char *)&VAR_0->offset, sizeof(VAR_0->offset));
 FUNC_2(&VAR_3, (char *)&VAR_0->devname, sizeof(VAR_0->devname));
 FUNC_2(&VAR_3, VAR_1, VAR_2);

 FUNC_0(VAR_0->digest, &VAR_3);
}
