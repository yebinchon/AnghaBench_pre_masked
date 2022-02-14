
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_skb_reader {size_t count; unsigned int offset; int csum; int skb; } ;
typedef int __wsum ;


 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int,void*,size_t,int ) ;

__attribute__((used)) static size_t FUNC_2(struct xdr_skb_reader *VAR_0, void *VAR_1, size_t VAR_2)
{
 unsigned int VAR_3;
 __wsum VAR_4;

 if (VAR_2 > VAR_0->count)
  VAR_2 = VAR_0->count;
 VAR_3 = VAR_0->offset;
 VAR_4 = FUNC_1(VAR_0->skb, VAR_3, VAR_1, VAR_2, 0);
 VAR_0->csum = FUNC_0(VAR_0->csum, VAR_4, VAR_3);
 VAR_0->count -= VAR_2;
 VAR_0->offset += VAR_2;
 return VAR_2;
}
