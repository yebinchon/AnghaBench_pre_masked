
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int * page_ptr; struct kvec* iov; int * end; int * p; } ;
struct kvec {unsigned int iov_len; scalar_t__ iov_base; } ;
typedef int __be32 ;



__attribute__((used)) static void FUNC_0(struct xdr_stream *VAR_0, struct kvec *VAR_1,
  unsigned int VAR_2)
{
 if (VAR_2 > VAR_1->iov_len)
  VAR_2 = VAR_1->iov_len;
 VAR_0->p = (__be32*)VAR_1->iov_base;
 VAR_0->end = (__be32*)(VAR_1->iov_base + VAR_2);
 VAR_0->iov = VAR_1;
 VAR_0->page_ptr = ((void*)0);
}
