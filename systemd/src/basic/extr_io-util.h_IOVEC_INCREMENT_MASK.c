
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iovec {size_t iov_len; int * iov_base; } ;


 size_t FUNC_0 (size_t,size_t) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline size_t FUNC_2(struct iovec *VAR_0, size_t VAR_1, size_t VAR_2) {
        size_t VAR_3;

        for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
                size_t VAR_4;

                if (FUNC_1(VAR_2 <= 0))
                        break;

                VAR_4 = FUNC_0(VAR_0[VAR_3].iov_len, VAR_2);
                VAR_0[VAR_3].iov_len -= VAR_4;
                VAR_0[VAR_3].iov_base = (uint8_t*) VAR_0[VAR_3].iov_base + VAR_4;
                VAR_2 -= VAR_4;
        }

        return VAR_2;
}
