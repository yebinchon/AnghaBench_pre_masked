
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* pmbedtls_msg ;
struct TYPE_11__ {TYPE_3__* pssl; struct TYPE_11__* pnext; } ;
typedef TYPE_4__ espconn_msg ;
struct TYPE_9__ {int fd; } ;
struct TYPE_8__ {int fd; } ;
struct TYPE_10__ {TYPE_2__ listen_fd; TYPE_1__ fd; } ;


 TYPE_4__* VAR_0 ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static espconn_msg* FUNC_0(int VAR_2)
{
 espconn_msg *VAR_3 = ((void*)0);
 pmbedtls_msg VAR_4 = ((void*)0);

 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->pnext) {
  if(VAR_3->pssl != ((void*)0)){
   VAR_4 = VAR_3->pssl;
   if (VAR_4->fd.fd == VAR_2)
    return VAR_3;
  }
 }

 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->pnext){
  if(VAR_3->pssl != ((void*)0)){
   VAR_4 = VAR_3->pssl;
   if (VAR_4->listen_fd.fd == VAR_2)
    return VAR_3;
  }
 }
 return ((void*)0);
}
